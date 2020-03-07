<!-- {% include first.md %} -->

# Posts

{% for post in site.posts %}
    <h2><a href="{{ post.url }}"> :point_right: {{ post.title }}</a></h2>
{% endfor %}