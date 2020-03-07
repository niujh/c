# Posts


{{ site }}

{% for post in site.posts %}
    <h2><a href="{{ post.pta.url }}"> :point_right: {{ post.title }}</a></h2>
{% endfor %}

{% for post in site.posts %}
    <h2><a href="{{ post.pta._url }}"> :point_right: {{ post.title }}</a></h2>
{% endfor %}